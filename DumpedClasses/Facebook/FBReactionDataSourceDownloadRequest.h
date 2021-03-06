//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBGraphQLPagedDownloadRequest.h>

#import "FBReactionDownloadRequestProtocol-Protocol.h"

@class NSString;

@interface FBReactionDataSourceDownloadRequest : FBGraphQLPagedDownloadRequest <FBReactionDownloadRequestProtocol>
{
    CDUnknownBlockType _downloadRequestBlock;
}

+ (CDUnknownBlockType)responseProcessingBlock;
- (void).cxx_destruct;
- (id)newQueryWithCursor:(id)arg1;
- (id)initWithTargetID:(id)arg1 downloadRequestBlock:(CDUnknownBlockType)arg2 callbackPerformer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

