//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMComponent.h"

@class NSString;

@interface FMItemTimeCountDownViewComponent : FMComponent
{
    NSString *_prefixText;
    NSString *_suffixText;
    NSString *_days;
    NSString *_hours;
    NSString *_minutes;
    NSString *_seconds;
    NSString *_timeSeperator;
}

@property(copy, nonatomic) NSString *timeSeperator; // @synthesize timeSeperator=_timeSeperator;
@property(copy, nonatomic) NSString *seconds; // @synthesize seconds=_seconds;
@property(copy, nonatomic) NSString *minutes; // @synthesize minutes=_minutes;
@property(copy, nonatomic) NSString *hours; // @synthesize hours=_hours;
@property(copy, nonatomic) NSString *days; // @synthesize days=_days;
@property(copy, nonatomic) NSString *suffixText; // @synthesize suffixText=_suffixText;
@property(copy, nonatomic) NSString *prefixText; // @synthesize prefixText=_prefixText;
- (void).cxx_destruct;
- (void)updateOnlyPrefix:(id)arg1 andSuffix:(id)arg2;
- (void)updateTime:(id)arg1 withSeperator:(id)arg2 withPrefix:(id)arg3 withSuffix:(id)arg4;
- (id)init;

@end

