//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTSender.h"

@interface CTFlightOrderDetailSender : CTSender
{
}

+ (id)flightOrderModifyModelWithInvoiceAndDeliveryInfo:(id)arg1;
+ (id)getInstance;
- (id)sendFlightSaveModifyInvoiceAndDeliveryInfo:(id)arg1;
- (id)sendGetFlightOrderDetailWithFlightOrderDetailCacheBean:(id)arg1 OrderId:(long long)arg2 token:(id)arg3;
- (id)sendGetflightorderDeliveryWithFlightOrderDelieryCacheBean:(id)arg1 OrderId:(long long)arg2;
- (id)sendGetFlightOrderDetailDeliveryEditByURL:(id)arg1 urlData:(id)arg2;
- (id)sendGetFlightOrderDetailByURL:(id)arg1 urlData:(id)arg2;

@end
