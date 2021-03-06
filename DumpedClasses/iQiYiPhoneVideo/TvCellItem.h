//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, QYCornerMarksViewPhone, UIButton, UIImageView, UIView;

@interface TvCellItem : UICollectionViewCell
{
    UIView *_bgView;
    UIImageView *_downloadStateIcon;
    UIImageView *_paradaIcon;
    int _curState;
    UIImageView *_playingImageView;
    int _iconType;
    QYCornerMarksViewPhone *_cornerViewPhone;
    _Bool _miniState;
    int _cornerFlag;
    UIImageView *_playingIcon;
    UIButton *_itemButton;
    UIButton *_selectBtn;
    NSString *_curId;
}

@property(nonatomic) _Bool miniState; // @synthesize miniState=_miniState;
@property(copy, nonatomic) NSString *curId; // @synthesize curId=_curId;
@property(nonatomic) int cornerFlag; // @synthesize cornerFlag=_cornerFlag;
@property(retain, nonatomic) UIButton *selectBtn; // @synthesize selectBtn=_selectBtn;
@property(retain, nonatomic) UIButton *itemButton; // @synthesize itemButton=_itemButton;
@property(retain, nonatomic) UIImageView *playingIcon; // @synthesize playingIcon=_playingIcon;
- (void).cxx_destruct;
- (void)updateCurSelItemVIPState;
- (void)showIconView:(int)arg1;
- (void)showPlayingImageView:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setSelectState:(_Bool)arg1;
- (void)configItemViewForTvEpisode;
- (void)updateCornerFlag:(int)arg1;
- (void)updateCornerFlagAndIcon:(id)arg1;
- (void)reloadData:(id)arg1;
- (void)resizeSubviewFrame;
- (void)updateState:(int)arg1;
- (void)updateItemBgColor;
- (void)loadCornerView;
- (id)initWithFrameAndState:(struct CGRect)arg1 state:(int)arg2;
- (id)initWithFrameAndState:(struct CGRect)arg1 state:(int)arg2 ministate:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

