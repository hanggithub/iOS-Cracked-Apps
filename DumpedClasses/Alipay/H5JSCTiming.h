//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class H5JSCBridge, NSMutableDictionary;

@interface H5JSCTiming : NSObject
{
    _Bool _paused;
    CDUnknownBlockType _pauseCallback;
    NSMutableDictionary *_timers;
    H5JSCBridge *_bridge;
}

@property(nonatomic) __weak H5JSCBridge *bridge; // @synthesize bridge=_bridge;
@property(retain, nonatomic) NSMutableDictionary *timers; // @synthesize timers=_timers;
@property(copy, nonatomic) CDUnknownBlockType pauseCallback; // @synthesize pauseCallback=_pauseCallback;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
- (void).cxx_destruct;
- (void)deleteTimer:(id)arg1;
- (void)createTimer:(id)arg1 duration:(double)arg2 jsSchedulingTime:(id)arg3 repeats:(_Bool)arg4;
- (void)didUpdateFrame;
- (void)startTimers;
- (void)stopTimers;
- (void)invalidate;
- (void)dealloc;
- (id)initWithBridge:(id)arg1;

@end

