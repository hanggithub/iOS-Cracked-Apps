//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QMAnnotation.h"

@class NSMutableDictionary, NSNumber, NSString, UIView;

@interface JsonPOIInfo : NSObject <QMAnnotation>
{
    NSMutableDictionary *dictionary_;
    NSString *imageFileName_;
    NSString *category_;
    float _angle;
    UIView *_customCalloutView;
    NSString *_pic_url_prefix;
}

@property(readonly, copy, nonatomic) NSString *pic_url_prefix; // @synthesize pic_url_prefix=_pic_url_prefix;
@property(retain, nonatomic) UIView *customCalloutView; // @synthesize customCalloutView=_customCalloutView;
@property(nonatomic) float angle; // @synthesize angle=_angle;
@property(copy, nonatomic) NSString *imageFileName; // @synthesize imageFileName=imageFileName_;
@property(copy, nonatomic) NSString *category; // @synthesize category=category_;
@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=dictionary_;
- (void).cxx_destruct;
- (id)address;
- (_Bool)isEqual:(id)arg1;
- (id)subtitle;
- (id)title;
@property(readonly, nonatomic) struct _TXMapPoint coordinate;
- (void)setChanged:(_Bool)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)jsonString;
@property(readonly, nonatomic) _Bool isRich;
@property(copy, nonatomic) NSNumber *identify;
@property(readonly, copy, nonatomic) NSString *m_poiInfo;
@property(readonly, nonatomic) long long avPrice;
@property(readonly, nonatomic) long long cmtLevel;
@property(readonly, copy, nonatomic) NSString *pointy;
@property(readonly, copy, nonatomic) NSString *pointx;
@property(readonly, copy, nonatomic) NSString *typeName;
@property(readonly, nonatomic) long long poitype;
@property(readonly, copy, nonatomic) NSString *phone;
@property(copy, nonatomic) NSString *addr;
@property(copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *uid;
@property(readonly, nonatomic) NSMutableDictionary *content;
- (void)updateWithContent:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithContent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

