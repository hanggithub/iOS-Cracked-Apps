//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPJsonData.h"

@class NSNumber, NSString;
@protocol Optional;

@interface QYPPStarFeedTag : QYPPJsonData
{
    NSString<Optional> *_name;
    NSNumber<Optional> *_score;
    NSNumber<Optional> *_tag;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSNumber<Optional> *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSNumber<Optional> *score; // @synthesize score=_score;
@property(retain, nonatomic) NSString<Optional> *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

