//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@interface QueryTicketInfoRequest : CTBusinessBean
{
    int serviceVersion;
    int platform;
    int businessEType;
    int useEType;
    int subUseEType;
    int subPayType;
    int userSourceType;
}

@property(nonatomic) int userSourceType; // @synthesize userSourceType;
@property(nonatomic) int subPayType; // @synthesize subPayType;
@property(nonatomic) int subUseEType; // @synthesize subUseEType;
@property(nonatomic) int useEType; // @synthesize useEType;
@property(nonatomic) int businessEType; // @synthesize businessEType;
@property(nonatomic) int platform; // @synthesize platform;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end
