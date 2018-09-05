#include <iostream>
#include "IAPS_flags.h"

int main(int argc, char * argv[])
{
    gflags::SetUsageMessage("command line brew\n"
            "Usage: IAPS <command> <args>\n\n"
            "commands:\n"
            "setF:\t\t seeting files directory\n"
            "logPath:\t\t path of log files' floder\n");
    gflags::SetVersionString("0.1.0");
    gflags::ParseCommandLineFlags(&argc, &argv, true);
    std::cout << "Setting files directory: " << FLAGS_setF << std::endl
        << "Log files directory is: " << FLAGS_logPath << std::endl;
   
     

    return 0;
}
