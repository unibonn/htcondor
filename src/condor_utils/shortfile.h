#ifndef _CONDOR_SHORTFILE_H
#define _CONDOR_SHORTFILE_H

// #include <string>
// #include "shortfile.h"

namespace htcondor {

bool
readShortFile( const std::string & fileName, std::string & contents );

bool
writeShortFile( const std::string & fileName, const std::string & contents );

}

#endif /* _CONDOR_SHORTFILE_H */
