//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBSNSShopWelcomeItem : TBJSONModel
{
    NSString *_content;
    NSString *_richContent;
    NSString *_nick;
}

@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *richContent; // @synthesize richContent=_richContent;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

