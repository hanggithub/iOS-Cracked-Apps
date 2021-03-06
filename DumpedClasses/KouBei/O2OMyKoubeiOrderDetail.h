//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString, OrderExtendInfo;

@interface O2OMyKoubeiOrderDetail : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasOrderId;
    _Bool _hasShopId;
    _Bool _hasShopLogo;
    _Bool _hasShopName;
    _Bool _hasOrderConsumeAmountText;
    _Bool _hasOrderSaveAmountText;
    _Bool _hasOrderCreateDate;
    _Bool _hasIsAlreadyComment;
    _Bool _hasOrderDetailUrl;
    _Bool _hasOrderExtendInfo;
    int _isAlreadyComment;
    NSString *_orderId;
    NSString *_shopId;
    NSString *_shopLogo;
    NSString *_shopName;
    NSString *_orderConsumeAmountText;
    NSString *_orderSaveAmountText;
    long long _orderCreateDate;
    NSString *_orderDetailUrl;
    OrderExtendInfo *_orderExtendInfo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) OrderExtendInfo *orderExtendInfo; // @synthesize orderExtendInfo=_orderExtendInfo;
@property(retain, nonatomic) NSString *orderDetailUrl; // @synthesize orderDetailUrl=_orderDetailUrl;
@property(nonatomic) int isAlreadyComment; // @synthesize isAlreadyComment=_isAlreadyComment;
@property(nonatomic) long long orderCreateDate; // @synthesize orderCreateDate=_orderCreateDate;
@property(retain, nonatomic) NSString *orderSaveAmountText; // @synthesize orderSaveAmountText=_orderSaveAmountText;
@property(retain, nonatomic) NSString *orderConsumeAmountText; // @synthesize orderConsumeAmountText=_orderConsumeAmountText;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) NSString *shopLogo; // @synthesize shopLogo=_shopLogo;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(readonly) _Bool hasOrderExtendInfo; // @synthesize hasOrderExtendInfo=_hasOrderExtendInfo;
@property(readonly) _Bool hasOrderDetailUrl; // @synthesize hasOrderDetailUrl=_hasOrderDetailUrl;
@property(readonly) _Bool hasIsAlreadyComment; // @synthesize hasIsAlreadyComment=_hasIsAlreadyComment;
@property(readonly) _Bool hasOrderCreateDate; // @synthesize hasOrderCreateDate=_hasOrderCreateDate;
@property(readonly) _Bool hasOrderSaveAmountText; // @synthesize hasOrderSaveAmountText=_hasOrderSaveAmountText;
@property(readonly) _Bool hasOrderConsumeAmountText; // @synthesize hasOrderConsumeAmountText=_hasOrderConsumeAmountText;
@property(readonly) _Bool hasShopName; // @synthesize hasShopName=_hasShopName;
@property(readonly) _Bool hasShopLogo; // @synthesize hasShopLogo=_hasShopLogo;
@property(readonly) _Bool hasShopId; // @synthesize hasShopId=_hasShopId;
@property(readonly) _Bool hasOrderId; // @synthesize hasOrderId=_hasOrderId;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

