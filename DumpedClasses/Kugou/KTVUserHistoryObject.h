//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class NSString;

@interface KTVUserHistoryObject : KTVObjectModel
{
    int _rank;
    int _cityCode;
    int _sex;
    int _playerId;
    int _competitionMedal;
    NSString *_opusName;
    NSString *_spend;
    NSString *_createTime;
    NSString *_cityName;
    long long _opusId;
    long long _kvid;
    NSString *_headImg;
    NSString *_nickName;
    NSString *_yearMonth;
}

@property(nonatomic) int competitionMedal; // @synthesize competitionMedal=_competitionMedal;
@property(copy, nonatomic) NSString *yearMonth; // @synthesize yearMonth=_yearMonth;
@property(nonatomic) int playerId; // @synthesize playerId=_playerId;
@property(nonatomic) int sex; // @synthesize sex=_sex;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *headImg; // @synthesize headImg=_headImg;
@property(nonatomic) int cityCode; // @synthesize cityCode=_cityCode;
@property(nonatomic) long long kvid; // @synthesize kvid=_kvid;
@property(nonatomic) long long opusId; // @synthesize opusId=_opusId;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(nonatomic) int rank; // @synthesize rank=_rank;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *spend; // @synthesize spend=_spend;
@property(copy, nonatomic) NSString *opusName; // @synthesize opusName=_opusName;
- (void).cxx_destruct;

@end

