//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString, PriceType;

@interface FlightXProductPriceInfomationModel : CTBusinessBean
{
    int tripType;
    int extendType;
    int serviceType;
    int passengerType;
    int unitType;
    PriceType *unitPrice;
    int minCount;
    int maxCount;
    NSString *responseJsonString;
    NSString *logoImgURL;
    NSMutableArray *remarkList;
    NSString *packageString;
}

@property(copy, nonatomic) NSString *packageString; // @synthesize packageString;
@property(retain, nonatomic) NSMutableArray *remarkList; // @synthesize remarkList;
@property(copy, nonatomic) NSString *logoImgURL; // @synthesize logoImgURL;
@property(copy, nonatomic) NSString *responseJsonString; // @synthesize responseJsonString;
@property(nonatomic) int maxCount; // @synthesize maxCount;
@property(nonatomic) int minCount; // @synthesize minCount;
@property(retain, nonatomic) PriceType *unitPrice; // @synthesize unitPrice;
@property(nonatomic) int unitType; // @synthesize unitType;
@property(nonatomic) int passengerType; // @synthesize passengerType;
@property(nonatomic) int serviceType; // @synthesize serviceType;
@property(nonatomic) int extendType; // @synthesize extendType;
@property(nonatomic) int tripType; // @synthesize tripType;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
