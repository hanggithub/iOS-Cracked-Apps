//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface KGPaymentInfoBLL : NSObject
{
    _Bool _isLoyalUser;
    NSDictionary *_paymentInfoDic;
}

+ (id)shareInstance;
@property(readonly, nonatomic) _Bool isLoyalUser; // @synthesize isLoyalUser=_isLoyalUser;
@property(retain, nonatomic) NSDictionary *paymentInfoDic; // @synthesize paymentInfoDic=_paymentInfoDic;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getIOSDefaultPaymentInfo;
- (id)getWebURLWithType:(unsigned long long)arg1;
- (void)getUserIdentityWithResult:(CDUnknownBlockType)arg1;
- (void)removeUserIdentity;
- (void)getUserIdentity;
- (void)addObservers;
- (id)init;

@end

