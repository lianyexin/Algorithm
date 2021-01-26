#include "stdafx.h"
#include <iostream>
#include <boost/asio.hpp>


class clinet {
public:
    void asClient(const std::string ip, const int port) {
        typedef boost::asio::io_service IoService;
        typedef boost::asio::ip::tcp TCP;

        try {
            IoService ioService;
            boost::system::error_code error;
            TCP::socket socket(ioService);
            TCP::endpoint endpoint(boost::asio::ip::address_v4::from_string(ip), port);
            socket.connect(endpoint, error);
            if (error)
                throw boost::system::system_error(error);

            while (true)
            {
                // boost::array<char, 128> buf;  
                std::vector<char> buf(128);
                size_t len = socket.read_some(boost::asio::buffer(buf), error);

                for (unsigned int i = 0; i < buf.size(); ++i)
                {
                    std::cout << buf[i] << ' ';
                }
                std::cout << std::endl;
                // 这是也要判断一下, 否则服务端运行断开, 这里会出现死循环.  
                if (error == boost::asio::error::eof)
                    break; // Connection closed cleanly by peer.  
                else if (error)
                    throw boost::system::system_error(error); // Some other error.  

                // buf要注意控制大小。  
                socket.write_some(boost::asio::buffer(buf, len), error);
            }

        }
        catch (std::exception& e)
        {
            std::cout << e.what() << std::endl;;
        }

    };

};