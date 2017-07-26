//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BeforeFilter.h"

@class NSString;

@interface DispatchBeforeFilter : NSObject <BeforeFilter>
{
    _Bool _isEnabled;
    struct _opaque_pthread_rwlock_t _rwlock;
}

+ (id)getInstance;
@property(nonatomic) struct _opaque_pthread_rwlock_t rwlock; // @synthesize rwlock=_rwlock;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
- (void)enable;
- (void)disable;
- (void)handle:(id)arg1 result:(id)arg2;
- (id)getName;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
