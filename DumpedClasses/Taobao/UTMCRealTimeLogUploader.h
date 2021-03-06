//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UTMCConfigInterfaceUpdate.h"
#import "UTMCGalleryManagerProtocol.h"

@class NSString, UTMCRealTimeLogCaches;

@interface UTMCRealTimeLogUploader : NSObject <UTMCConfigInterfaceUpdate, UTMCGalleryManagerProtocol>
{
    _Bool _isEnable;
    UTMCRealTimeLogCaches *_caches;
    long long _winSize;
    unsigned long long _upLoadSuccessCount;
    long long _failCount;
    unsigned long long _upLoadFailCount;
}

+ (void)close;
+ (_Bool)isEnable;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long upLoadFailCount; // @synthesize upLoadFailCount=_upLoadFailCount;
@property(nonatomic) long long failCount; // @synthesize failCount=_failCount;
@property(nonatomic) unsigned long long upLoadSuccessCount; // @synthesize upLoadSuccessCount=_upLoadSuccessCount;
@property(nonatomic) long long winSize; // @synthesize winSize=_winSize;
@property(retain, nonatomic) UTMCRealTimeLogCaches *caches; // @synthesize caches=_caches;
- (void).cxx_destruct;
@property(nonatomic) _Bool isEnable; // @synthesize isEnable=_isEnable;
- (void)updateSysConfigValue:(id)arg1 sysKey:(id)arg2;
- (_Bool)_uploadThroughTnetWithStream:(id)arg1 logs:(id)arg2;
- (id)_packageByTopicId:(id)arg1;
- (void)uploadLogs;
- (void)registerConfig;
- (void)close;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

