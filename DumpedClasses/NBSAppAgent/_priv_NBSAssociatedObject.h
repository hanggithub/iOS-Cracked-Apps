//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _priv_NBSAssociatedObject : NSObject
{
    _Bool _isFinish;
    int _busy_count;
    double _startTime;
    NSString *_url;
    NSString *_method;
}

@property int busy_count; // @synthesize busy_count=_busy_count;
@property _Bool isFinish; // @synthesize isFinish=_isFinish;
@property(retain, nonatomic) NSString *method; // @synthesize method=_method;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)init;

@end

