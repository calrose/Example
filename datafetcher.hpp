
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

#endif