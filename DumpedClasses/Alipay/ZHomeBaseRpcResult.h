//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface ZHomeBaseRpcResult : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *baseExt; // @dynamic baseExt;
@property(retain, nonatomic) NSString *followAction; // @dynamic followAction;
@property(readonly) _Bool hasBaseExt; // @dynamic hasBaseExt;
@property(readonly) _Bool hasFollowAction; // @dynamic hasFollowAction;
@property(readonly) _Bool hasLastUpdateTime; // @dynamic hasLastUpdateTime;
@property(readonly) _Bool hasMemo; // @dynamic hasMemo;
@property(readonly) _Bool hasResultCode; // @dynamic hasResultCode;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(nonatomic) long long lastUpdateTime; // @dynamic lastUpdateTime;
@property(retain, nonatomic) NSString *memo; // @dynamic memo;
@property(nonatomic) int resultCode; // @dynamic resultCode;
@property(nonatomic) _Bool success; // @dynamic success;

@end

