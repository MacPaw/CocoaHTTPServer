/**
 * In order to provide fast and flexible logging, this project uses Cocoa Lumberjack.
 * 
 * The Google Code page has a wealth of documentation if you have any questions.
 * https://github.com/robbiehanson/CocoaLumberjack
 * 
**/

#import <CocoaLumberjack/CocoaLumberjack.h>

// Define logging primitives.

static const DDLogLevel ddLogLevel = DDLogLevelError;

#define HTTP_LOG_ERROR    YES
#define HTTP_LOG_WARN     YES
#define HTTP_LOG_INFO     NO
#define HTTP_LOG_VERBOSE  NO
#define HTTP_LOG_TRACE    NO

#define HTTPLogError(frmt, ...)    DDLogError(frmt, ##__VA_ARGS__)
#define HTTPLogWarn(frmt, ...)     DDLogWarn(frmt, ##__VA_ARGS__)
#define HTTPLogInfo(frmt, ...)     DDLogInfo(frmt, ##__VA_ARGS__)
#define HTTPLogVerbose(frmt, ...)  DDLogVerbose(frmt, ##__VA_ARGS__)
#define HTTPLogTrace()             DDLogVerbose(@"%@[%p]: %@", THIS_FILE, self, THIS_METHOD)
#define HTTPLogTrace2(frmt, ...)   DDLogVerbose(frmt, ##__VA_ARGS__)

