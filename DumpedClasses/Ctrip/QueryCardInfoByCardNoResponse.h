//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray;

@interface QueryCardInfoByCardNoResponse : CTBusinessBean
{
    int result;
    NSMutableArray *resultMessageList;
    NSMutableArray *cardInfoList;
    NSMutableArray *creditCardList;
}

@property(retain, nonatomic) NSMutableArray *creditCardList; // @synthesize creditCardList;
@property(retain, nonatomic) NSMutableArray *cardInfoList; // @synthesize cardInfoList;
@property(retain, nonatomic) NSMutableArray *resultMessageList; // @synthesize resultMessageList;
@property(nonatomic) int result; // @synthesize result;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end

