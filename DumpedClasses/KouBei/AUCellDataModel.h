//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface AUCellDataModel : NSObject
{
    _Bool _selectedState;
    _Bool _highlightState;
    NSString *_iconUrl;
    NSString *_titleText;
    NSString *_descText;
    NSString *_checkMarkUrl;
    NSString *_indicatorUrl;
    NSArray *_buttonsArray;
    NSDictionary *_extendDic;
}

@property(nonatomic) _Bool highlightState; // @synthesize highlightState=_highlightState;
@property(nonatomic) _Bool selectedState; // @synthesize selectedState=_selectedState;
@property(retain, nonatomic) NSDictionary *extendDic; // @synthesize extendDic=_extendDic;
@property(retain, nonatomic) NSArray *buttonsArray; // @synthesize buttonsArray=_buttonsArray;
@property(retain, nonatomic) NSString *indicatorUrl; // @synthesize indicatorUrl=_indicatorUrl;
@property(retain, nonatomic) NSString *checkMarkUrl; // @synthesize checkMarkUrl=_checkMarkUrl;
@property(retain, nonatomic) NSString *descText; // @synthesize descText=_descText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void).cxx_destruct;

@end

