//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVModelObject.h"

@class NSArray, NSString;

@interface WVPackageAppInfoModel : WVModelObject
{
    unsigned long long _seq;
    NSString *_mappingUrl;
    NSArray *_addFolders;
    NSArray *_removedFolders;
    NSArray *_removedRes;
    long long _appMonitor;
}

@property(nonatomic) long long appMonitor; // @synthesize appMonitor=_appMonitor;
@property(retain, nonatomic) NSArray *removedRes; // @synthesize removedRes=_removedRes;
@property(retain, nonatomic) NSArray *removedFolders; // @synthesize removedFolders=_removedFolders;
@property(retain, nonatomic) NSArray *addFolders; // @synthesize addFolders=_addFolders;
@property(retain, nonatomic) NSString *mappingUrl; // @synthesize mappingUrl=_mappingUrl;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
- (void).cxx_destruct;

@end
