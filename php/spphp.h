
#ifndef _UDAPARTS_PHP_H_
#define _UDAPARTS_PHP_H_

#define ZTS 1
#define ZEND_DEBUG 0

#ifdef _MSC_VER

#define HAVE_SOCKLEN_T

#ifdef USE_OLD_PHP
static void ***tsrm_ls = nullptr;
#define PHP_COMPILER_ID  "VC11"
#else
#define PHP_COMPILER_ID  "VC14"
#endif //USE_OLD_PHP

#define PHP_WIN32 0
#define ZEND_WIN32

#else //_MSC_VER

#endif //USE_OLD_PHP

#ifdef USE_OLD_PHP
#define __STDC_LIMIT_MACROS
#define __STDC_CONSTANT_MACROS
#include "php5.6.19/main/php.h"
#pragma comment(lib, "php5ts.lib")

#else

#include "php7.0.4/main/php.h"
#pragma comment(lib, "php7ts.lib")

#endif //USE_OLD_PHP

#endif