//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, DCCardRoutePriceView, DCDestinationLabel, DCOrderInfoTimeLabel, DCOriginLabel, NSArray, NSString;

@interface DCCardRouteInfoView : UIView
{
    NSString *_time;
    NSString *_timeExtend;
    NSString *_startingAddress;
    NSString *_startingAddressDesc;
    NSString *_endingAddress;
    NSString *_endingAddressDesc;
    NSString *_price;
    NSString *_pricePrefix;
    NSString *_priceSuffix;
    NSString *_priceSubDesc;
    NSArray *_orderTags;
    CALayer *_bottomLineLayer;
    DCOrderInfoTimeLabel *_timeLabel;
    DCCardRoutePriceView *_priceView;
    DCDestinationLabel *_destinationLabel;
    DCOriginLabel *_originLabel;
}

+ (double)viewHeight;
+ (id)routeInfoView;
@property(retain, nonatomic) DCOriginLabel *originLabel; // @synthesize originLabel=_originLabel;
@property(retain, nonatomic) DCDestinationLabel *destinationLabel; // @synthesize destinationLabel=_destinationLabel;
@property(retain, nonatomic) DCCardRoutePriceView *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) DCOrderInfoTimeLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) CALayer *bottomLineLayer; // @synthesize bottomLineLayer=_bottomLineLayer;
@property(retain, nonatomic) NSArray *orderTags; // @synthesize orderTags=_orderTags;
@property(copy, nonatomic) NSString *priceSubDesc; // @synthesize priceSubDesc=_priceSubDesc;
@property(copy, nonatomic) NSString *priceSuffix; // @synthesize priceSuffix=_priceSuffix;
@property(copy, nonatomic) NSString *pricePrefix; // @synthesize pricePrefix=_pricePrefix;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *endingAddressDesc; // @synthesize endingAddressDesc=_endingAddressDesc;
@property(copy, nonatomic) NSString *endingAddress; // @synthesize endingAddress=_endingAddress;
@property(copy, nonatomic) NSString *startingAddressDesc; // @synthesize startingAddressDesc=_startingAddressDesc;
@property(copy, nonatomic) NSString *startingAddress; // @synthesize startingAddress=_startingAddress;
@property(copy, nonatomic) NSString *timeExtend; // @synthesize timeExtend=_timeExtend;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

