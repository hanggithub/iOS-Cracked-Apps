//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALBBConfigService.h"

@class NSMutableDictionary, NSString;

@interface ALBBConfigServiceImpl : NSObject <ALBBConfigService>
{
    NSMutableDictionary *_configData;
}

@property(retain, nonatomic) NSMutableDictionary *configData; // @synthesize configData=_configData;
- (void).cxx_destruct;
- (void)saveConfig:(id)arg1;
- (void)updateConfig:(id)arg1;
- (id)paramConfig;
- (_Bool)needsUpdate;
- (void)setLocalValueForKey:(id)arg1 value:(id)arg2;
- (void)reset;
- (void)loadPersistentConfig;
- (id)dictionaryValueForKey:(id)arg1 defaultValue:(id)arg2;
- (id)arrayValueForKey:(id)arg1 defaultValue:(id)arg2;
- (_Bool)boolValueForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (id)numberValueForKey:(id)arg1 defaultValue:(id)arg2;
- (id)stringValueForKey:(id)arg1 defaultValue:(id)arg2;
- (id)stringValueForKey:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

