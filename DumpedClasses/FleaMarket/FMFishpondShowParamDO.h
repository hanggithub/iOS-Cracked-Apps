//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FMFishpondShowParamDO : NSObject
{
    NSString *_lat;
    NSString *_lang;
    long long _rowsPerPage;
    long long _pageNumber;
}

@property(nonatomic) long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) long long rowsPerPage; // @synthesize rowsPerPage=_rowsPerPage;
@property(copy, nonatomic) NSString *lang; // @synthesize lang=_lang;
@property(copy, nonatomic) NSString *lat; // @synthesize lat=_lat;
- (void).cxx_destruct;

@end

