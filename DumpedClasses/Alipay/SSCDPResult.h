//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SSCDPResult : NSObject
{
    _Bool _success;
    NSString *_resultCode;
    NSString *_resultDesc;
    long long _id;
    long long _userOpLogId;
    long long _globalOpLogId;
}

@property(nonatomic) long long globalOpLogId; // @synthesize globalOpLogId=_globalOpLogId;
@property(nonatomic) long long userOpLogId; // @synthesize userOpLogId=_userOpLogId;
@property(nonatomic) long long id; // @synthesize id=_id;
@property(retain, nonatomic) NSString *resultDesc; // @synthesize resultDesc=_resultDesc;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end
