//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VZListCell.h"

@class UIImageView, UILabel;

@interface ALPMemberCardListCell : VZListCell
{
    UILabel *_leftText;
    UILabel *_rightText;
    UIImageView *_arrow;
}

@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UILabel *rightText; // @synthesize rightText=_rightText;
@property(retain, nonatomic) UILabel *leftText; // @synthesize leftText=_leftText;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)privilegeClick:(id)arg1;
- (void)setItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

