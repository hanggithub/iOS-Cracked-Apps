//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SARouter.h"

#import "SADyncRouterRequestDelegate.h"
#import "SADyncRouterResponseDelegate.h"

@class DTRpcAsyncCaller, NSString, NSTimer, SADyncRouterRequest, SADyncRouterResponse;

@interface SADyncRouter : SARouter <SADyncRouterRequestDelegate, SADyncRouterResponseDelegate>
{
    _Bool _requestTimeOut;
    DTRpcAsyncCaller *_rpcAsyncCaller;
    SADyncRouterRequest *_routerRequest;
    SADyncRouterResponse *_routerResponse;
    NSTimer *_requestTimer;
}

+ (void)uploadImageForUTC_privateWithDic:(id)arg1;
+ (void)uploadImageForUTCWithExtinfo:(id)arg1;
@property _Bool requestTimeOut; // @synthesize requestTimeOut=_requestTimeOut;
@property(retain, nonatomic) NSTimer *requestTimer; // @synthesize requestTimer=_requestTimer;
@property(retain, nonatomic) SADyncRouterResponse *routerResponse; // @synthesize routerResponse=_routerResponse;
@property(retain, nonatomic) SADyncRouterRequest *routerRequest; // @synthesize routerRequest=_routerRequest;
@property(retain, nonatomic) DTRpcAsyncCaller *rpcAsyncCaller; // @synthesize rpcAsyncCaller=_rpcAsyncCaller;
- (void).cxx_destruct;
- (void)routeRpcTimeoutAction;
- (void)stopRouteRpcTimer;
- (void)startRouteRpcTimer;
- (void)cancelRequest;
- (void)dealloc;
- (void)dyncRouterResponse:(id)arg1 didFailPerformAction:(id)arg2;
- (void)dyncRouterResponse:(id)arg1 didFinishPerformAction:(id)arg2;
- (void)dyncRouterRequest:(id)arg1 didFailBuildUpRpcRequest:(id)arg2;
- (void)dyncRouterRequest:(id)arg1 didFinishBuildUpRpcRequest:(id)arg2;
- (void)exec:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

