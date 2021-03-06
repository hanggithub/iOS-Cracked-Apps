//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface PlayerDataItem : NSObject
{
    NSString *_albumId;
    NSString *_tvId;
    NSString *_subjectId;
    NSString *_ctype;
    NSString *_pc;
    NSString *_appUrl;
    NSString *_loadImage;
    NSString *_pushFc;
    NSString *_ppCircleID;
    NSString *_ppAtoken;
    NSString *_starNickname;
    NSString *_propID;
    NSString *_userLevel;
    NSNumber *_subjectSort;
    NSArray *_subjectArray;
    NSDictionary *_vvLog;
    double _startTime;
    int _timeOut;
    _Bool _isQiyiOnly;
    _Bool _isCheckHistory;
    NSString *_ovUrl;
    NSString *_ovTitle;
    NSString *_provide;
    NSString *_video_type;
    NSString *_sourceid;
    NSDictionary *_loading;
    _Bool _isDownLoad;
    _Bool _isShowOffine;
    _Bool _isNeedRequestEpisode;
    int _urlType;
    int _screenMode;
    int _openType;
    int _videoType;
    NSString *_resType;
    NSString *_scene;
    NSString *_cupid_token;
    NSString *_adAllLong;
    NSString *_adHasplayLong;
    NSNumber *_adOpenType;
}

@property(retain, nonatomic) NSDictionary *loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSString *sourceid; // @synthesize sourceid=_sourceid;
@property(copy, nonatomic) NSString *video_type; // @synthesize video_type=_video_type;
@property(copy, nonatomic) NSString *provide; // @synthesize provide=_provide;
@property(nonatomic) _Bool isNeedRequestEpisode; // @synthesize isNeedRequestEpisode=_isNeedRequestEpisode;
@property(retain, nonatomic) NSNumber *adOpenType; // @synthesize adOpenType=_adOpenType;
@property(copy, nonatomic) NSString *adHasplayLong; // @synthesize adHasplayLong=_adHasplayLong;
@property(copy, nonatomic) NSString *adAllLong; // @synthesize adAllLong=_adAllLong;
@property(copy, nonatomic) NSString *cupid_token; // @synthesize cupid_token=_cupid_token;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(nonatomic) int videoType; // @synthesize videoType=_videoType;
@property(nonatomic) int openType; // @synthesize openType=_openType;
@property(nonatomic) _Bool isShowOffine; // @synthesize isShowOffine=_isShowOffine;
@property(nonatomic) _Bool isDownLoad; // @synthesize isDownLoad=_isDownLoad;
@property(copy, nonatomic) NSString *resType; // @synthesize resType=_resType;
@property(nonatomic) int screenMode; // @synthesize screenMode=_screenMode;
@property(nonatomic) _Bool isCheckHistory; // @synthesize isCheckHistory=_isCheckHistory;
@property(nonatomic) _Bool isQiyiOnly; // @synthesize isQiyiOnly=_isQiyiOnly;
@property(nonatomic) int timeOut; // @synthesize timeOut=_timeOut;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSDictionary *vvLog; // @synthesize vvLog=_vvLog;
@property(retain, nonatomic) NSArray *subjectArray; // @synthesize subjectArray=_subjectArray;
@property(retain, nonatomic) NSNumber *subjectSort; // @synthesize subjectSort=_subjectSort;
@property(nonatomic) int urlType; // @synthesize urlType=_urlType;
@property(copy, nonatomic) NSString *ovTitle; // @synthesize ovTitle=_ovTitle;
@property(copy, nonatomic) NSString *ovUrl; // @synthesize ovUrl=_ovUrl;
@property(copy, nonatomic) NSString *userLevel; // @synthesize userLevel=_userLevel;
@property(copy, nonatomic) NSString *propID; // @synthesize propID=_propID;
@property(copy, nonatomic) NSString *starNickname; // @synthesize starNickname=_starNickname;
@property(copy, nonatomic) NSString *ppAtoken; // @synthesize ppAtoken=_ppAtoken;
@property(copy, nonatomic) NSString *ppCircleID; // @synthesize ppCircleID=_ppCircleID;
@property(copy, nonatomic) NSString *pushFc; // @synthesize pushFc=_pushFc;
@property(copy, nonatomic) NSString *loadImage; // @synthesize loadImage=_loadImage;
@property(copy, nonatomic) NSString *appUrl; // @synthesize appUrl=_appUrl;
@property(copy, nonatomic) NSString *pc; // @synthesize pc=_pc;
@property(copy, nonatomic) NSString *ctype; // @synthesize ctype=_ctype;
@property(copy, nonatomic) NSString *subjectId; // @synthesize subjectId=_subjectId;
@property(copy, nonatomic) NSString *tvId; // @synthesize tvId=_tvId;
@property(copy, nonatomic) NSString *albumId; // @synthesize albumId=_albumId;
- (void).cxx_destruct;
- (id)init;

@end

