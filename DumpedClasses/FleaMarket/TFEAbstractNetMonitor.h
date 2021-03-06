//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TFENetMonitorServiceProtocol.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, TFEReachability;

@interface TFEAbstractNetMonitor : NSObject <TFENetMonitorServiceProtocol>
{
    unsigned long long _lastNetworkType;
    NSMutableArray *_listeners;
    TFEReachability *_reachability;
    NSObject<OS_dispatch_queue> *_notifyQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue; // @synthesize notifyQueue=_notifyQueue;
@property(retain) TFEReachability *reachability; // @synthesize reachability=_reachability;
@property(retain) NSMutableArray *listeners; // @synthesize listeners=_listeners;
@property unsigned long long lastNetworkType; // @synthesize lastNetworkType=_lastNetworkType;
- (void).cxx_destruct;
- (void)mockLastNetworkType:(unsigned long long)arg1;
- (void)notifyAllNetworkChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (_Bool)isReachable;
- (void)addNetworkListener:(CDUnknownBlockType)arg1;
- (_Bool)isUseProxy;
- (id)currentWifiSSID;
- (id)init;

@end

