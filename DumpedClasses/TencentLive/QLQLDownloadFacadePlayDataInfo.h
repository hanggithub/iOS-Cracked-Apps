//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QLQLDownloadFacadePlayDataInfo : NSObject
{
    NSString *_uip;
    NSString *_testId;
    long long _dltype;
    NSString *_format;
    long long _rate;
    long long _clip;
    NSString *_status;
    long long _type;
    long long _duration;
}

@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(nonatomic) long long clip; // @synthesize clip=_clip;
@property(nonatomic) long long rate; // @synthesize rate=_rate;
@property(copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(nonatomic) long long dltype; // @synthesize dltype=_dltype;
@property(copy, nonatomic) NSString *testId; // @synthesize testId=_testId;
@property(copy, nonatomic) NSString *uip; // @synthesize uip=_uip;
- (void).cxx_destruct;
- (id)initWithUip:(id)arg1 testId:(id)arg2 dltype:(long long)arg3 format:(id)arg4 rate:(long long)arg5 clip:(long long)arg6 status:(id)arg7 type:(long long)arg8 duration:(long long)arg9;

@end

