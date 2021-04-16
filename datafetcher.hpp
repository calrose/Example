
#ifndef DATASFETCHER_H
#define DATASFETCHER_H

#include <sstream>

#include <cstdlib>

#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Exception.hpp>
#include <iostream>

int simpleTest(std::ostream& output)
{
   const char *url = "https://csi330-testingdemo.herokuapp.com/api";
   try
   {
      curlpp::Cleanup myCleanup;
      curlpp::Easy request;

      request.setOpt(new curlpp::options::Url(url));

      output << request;

      return EXIT_SUCCESS;
   }
   catch (curlpp::LogicError &e)
   {
      std::cerr << e.what() << std::endl;
   }
   catch (curlpp::RuntimeError &e)
   {
      std::cerr << e.what() << std::endl;
   }

   return EXIT_FAILURE;
}

int getList(std::ostream& output)
{
   const char *url = "https://csi330-testingdemo.herokuapp.com/api/mongo";
   try
   {
      curlpp::Cleanup myCleanup;
      curlpp::Easy request;

      request.setOpt(new curlpp::options::Url(url));

      output << request;

      return EXIT_SUCCESS;
   }
   catch (curlpp::LogicError &e)
   {
      std::cerr << e.what() << std::endl;
   }
   catch (curlpp::RuntimeError &e)
   {
      std::cerr << e.what() << std::endl;
   }

   return EXIT_FAILURE;
}

int addItem(std::string data)
{
   const char *url = "https://csi330-testingdemo.herokuapp.com/api/mongo";
   try
   {
      curlpp::Cleanup myCleanup;
      curlpp::Easy request;
      std::list<std::string> header;

      header.push_back("Content-Type: application/json");

      request.setOpt(new curlpp::options::Url(url));
      request.setOpt(new curlpp::options::HttpHeader(header));
      request.setOpt(new curlpp::options::CustomRequest{"POST"});
      request.setOpt(new curlpp::options::PostFields(data));
      request.setOpt(new curlpp::options::PostFieldSize(data.length()));
      request.perform();


      return EXIT_SUCCESS;
   }
   catch (curlpp::LogicError &e)
   {
      std::cerr << e.what() << std::endl;
   }
   catch (curlpp::RuntimeError &e)
   {
      std::cerr << e.what() << std::endl;
   }

   return EXIT_FAILURE;
}

int removeItem(std::string data)
{
   const std::string url = "https://csi330-testingdemo.herokuapp.com/api/mongo/" + data;
   try
   {
      curlpp::Cleanup myCleanup;
      curlpp::Easy request;


      request.setOpt(new curlpp::options::Url(url));
      request.setOpt(new curlpp::options::CustomRequest{"DELETE"});
      request.perform();

      return EXIT_SUCCESS;
   }
   catch (curlpp::LogicError &e)
   {
      std::cerr << e.what() << std::endl;
   }
   catch (curlpp::RuntimeError &e)
   {
      std::cerr << e.what() << std::endl;
   }

   return EXIT_FAILURE;
}

#endif