//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface QYOfflineADPPadSingleResTableCell : UITableViewCell
{
    long long _fromeType;
    UILabel *_titleLabel;
    UIImageView *_iconV;
}

@property(retain, nonatomic) UIImageView *iconV; // @synthesize iconV=_iconV;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateIsVIp:(_Bool)arg1;
- (void)updateText:(id)arg1;
- (void)updateTextColorWithSelect:(_Bool)arg1;
- (id)getResTitleColor:(_Bool)arg1;
- (struct CGRect)getTitleSize:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 fromeType:(long long)arg3;

@end

