//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APDirectoryWatcherDelegate.h"

@class APDirectoryWatcher, NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface APBackupHandler : NSObject <APDirectoryWatcherDelegate>
{
    _Bool _shouldWatch;
    APDirectoryWatcher *_docDirWatcher;
    NSObject<OS_dispatch_queue> *_backupIssueQueue;
    NSArray *_backupWhiteList;
}

+ (id)sharedHandler;
@property(retain, nonatomic) NSArray *backupWhiteList; // @synthesize backupWhiteList=_backupWhiteList;
@property(nonatomic) _Bool shouldWatch; // @synthesize shouldWatch=_shouldWatch;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backupIssueQueue; // @synthesize backupIssueQueue=_backupIssueQueue;
@property(retain, nonatomic) APDirectoryWatcher *docDirWatcher; // @synthesize docDirWatcher=_docDirWatcher;
- (void).cxx_destruct;
- (void)directoryDidChange:(id)arg1;
- (void)readConfigValue;
- (void)setupDocumentsBackupAttributes;
- (void)setupNonbackupAttributes;
- (void)handleBackupIssue;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
