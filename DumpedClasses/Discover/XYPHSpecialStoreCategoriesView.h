//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIButton;

@interface XYPHSpecialStoreCategoriesView : UIView
{
    id <XYPHSpecialStoreCategoriesViewDelegate> _delegate;
    NSMutableArray *_categoriesArray;
    UIButton *_currentSelectedButton;
    UIView *_bottomView;
}

@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIButton *currentSelectedButton; // @synthesize currentSelectedButton=_currentSelectedButton;
@property(retain, nonatomic) NSMutableArray *categoriesArray; // @synthesize categoriesArray=_categoriesArray;
@property(nonatomic) __weak id <XYPHSpecialStoreCategoriesViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)highlightButton;
- (void)categoryButtonClicked:(id)arg1;
- (void)largeButtonClicked;
- (void)setViewWithCategories:(id)arg1 style:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

