//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QLCmdPushNotificationManager : NSObject
{
    int _pushCmdValue;
    long long _pushFromFlag;
}

+ (id)sharedManager;
- (_Bool)handleCmd:(id)arg1;
- (_Bool)setPushInfo:(id)arg1;
- (_Bool)setPushInfo:(id)arg1 pushFrom:(long long)arg2;

@end
