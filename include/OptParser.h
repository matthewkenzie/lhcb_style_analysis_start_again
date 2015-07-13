#ifndef OptParser_h
#define OptParser_h

#include "TString.h"

#include "boost/program_options.hpp"

namespace po = boost::program_options;

class OptParser {

  public:
    OptParser();
    ~OptParser();

    void parseOptions(int argc, char **argv);

    std::string   cfgFile;
    std::string   outFile;
    Long64_t      firstEntry;
    Long64_t      lastEntry;
    bool          verbose;
    bool          debug;
    bool          usage;
    bool          batch;
    std::string   batchdir;
    std::string   queue;

    std::string   prog_name;

  private:

    po::options_description desc;
    po::variables_map vm;


};

#endif
