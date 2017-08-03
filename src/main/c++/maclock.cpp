#include <ApplicationServices/ApplicationServices.h>
#include "maclock.h"

static CFStringRef const CGSSessionScreenIsLocked = CFSTR("CGSSessionScreenIsLocked");

bool isWorkstationLocked(){
    CFDictionaryRef sessionInfo = CGSessionCopyCurrentDictionary();

    CFBooleanRef screenIsLockedRef = (CFBooleanRef) CFDictionaryGetValue(sessionInfo, CGSSessionScreenIsLocked);
    bool screenIsLocked = screenIsLockedRef ? CFBooleanGetValue(screenIsLockedRef) : false;

    CFBooleanRef onConsoleKeyRef = (CFBooleanRef) CFDictionaryGetValue(sessionInfo, kCGSessionOnConsoleKey);
    bool onConsoleKey = onConsoleKeyRef ? CFBooleanGetValue(onConsoleKeyRef) : false;

    CFRelease(sessionInfo);

    return screenIsLocked || !onConsoleKey;
}
