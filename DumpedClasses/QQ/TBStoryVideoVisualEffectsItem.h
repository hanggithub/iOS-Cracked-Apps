//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface TBStoryVideoVisualEffectsItem : UIView
{
    long long _visualEffectType;
    UIImageView *_icon;
    UILabel *_title;
    long long _index;
    UILabel *_tips;
}

@property(retain, nonatomic) UILabel *tips; // @synthesize tips=_tips;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) long long visualEffectType; // @synthesize visualEffectType=_visualEffectType;
- (void)setTipsHidden:(_Bool)arg1;
- (void)updateItem;
- (void)createEffectsItemWith:(id)arg1 title:(id)arg2 tips:(id)arg3;
- (id)init;
- (id)initWithEffectItem:(id)arg1;
- (_Bool)isPublish;
- (void)dealloc;

@end
