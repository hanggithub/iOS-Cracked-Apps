//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneModel.h"

@class NSDate, QZGPSInfo, QZGeoInfo, QZPOIList, QZWeatherInfo;

@interface QZoneLBSData : QZoneModel
{
}

- (void)logDebugInfomation;

// Remaining properties
@property(retain, nonatomic) QZGPSInfo *gpsInfo; // @dynamic gpsInfo;
@property(nonatomic) int isReflushFlag; // @dynamic isReflushFlag;
@property(retain, nonatomic) QZPOIList *poiListInfo; // @dynamic poiListInfo;
@property(retain, nonatomic) QZGeoInfo *positionInfo; // @dynamic positionInfo;
@property(retain, nonatomic) NSDate *timestamp; // @dynamic timestamp;
@property(nonatomic) long long useTimes; // @dynamic useTimes;
@property(retain, nonatomic) QZWeatherInfo *weatherInfo; // @dynamic weatherInfo;

@end
