//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray<TBLiveGiftItemModel>, NSString;

@interface TBLiveGiftModel : TBJSONModel
{
    NSArray<TBLiveGiftItemModel> *_itemList;
    NSString *_campaignId;
    NSString *_appKey;
}

@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(copy, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(retain, nonatomic) NSArray<TBLiveGiftItemModel> *itemList; // @synthesize itemList=_itemList;
- (void).cxx_destruct;

@end

