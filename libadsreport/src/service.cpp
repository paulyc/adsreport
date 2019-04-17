#include "service.hpp"

namespace {
    boost::asio::io_service io_service;
}

DnsProvider::DnsProvider() : _resolver(io_service)
{

}
