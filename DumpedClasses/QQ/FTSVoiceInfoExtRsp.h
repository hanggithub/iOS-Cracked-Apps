//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface FTSVoiceInfoExtRsp : NSObject
{
    int _retCode;
    NSString *_qid;
    NSArray *_results;
}

@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) int retCode; // @synthesize retCode=_retCode;
@property(copy, nonatomic) NSString *qid; // @synthesize qid=_qid;
- (void).cxx_destruct;

@end

