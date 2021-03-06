//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UIPageControl, UIScrollView;

@interface PagePhotosView : UIView <UIScrollViewDelegate>
{
    UIScrollView *scrollView;
    UIPageControl *pageControl;
    _Bool pageControlUsed;
    id <PagePhotosDataSource> dataSource;
    NSMutableArray *imageViews;
    id <PagePhotosDelegate> _delegate;
}

@property(nonatomic) id <PagePhotosDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews;
@property(nonatomic) id <PagePhotosDataSource> dataSource; // @synthesize dataSource;
- (void).cxx_destruct;
- (void)scrollToNextPage;
- (void)changePage:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadScrollViewWithPage:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withDataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

