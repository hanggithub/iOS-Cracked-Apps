//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGScrollPageViewController.h"

#import "KGIndexViewDelegate.h"
#import "NoMusicViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"

@class KGIndexView, KGLocalSearchBar, KGSearchNoResultView, KGTableView, KGThemeLabel, KGThemeLine, NSArray, NSOperationQueue, NSString, NoMuicView;

@interface KGLocalSingerPageViewController : KGScrollPageViewController <UITableViewDataSource, NoMusicViewDelegate, UISearchBarDelegate, KGIndexViewDelegate>
{
    NoMuicView *_noSingerView;
    KGThemeLine *_searchLine;
    _Bool _isIndexing;
    _Bool _isFirstLoaded;
    NSOperationQueue *_notiQueue;
    _Bool _isRefreshedIndexView;
    _Bool _searching;
    KGTableView *_singerTableView;
    KGLocalSearchBar *_searchBar;
    NSArray *_allDataArray;
    NSArray *_dataArray;
    NSArray *_searchArray;
    KGSearchNoResultView *_noSearchResultView;
    KGIndexView *_indexView;
    NSArray *_indexViewLetter;
    long long _firstIndexTag;
    KGThemeLabel *_footViewLable;
}

@property(retain, nonatomic) KGThemeLabel *footViewLable; // @synthesize footViewLable=_footViewLable;
@property(nonatomic, getter=isSearching) _Bool searching; // @synthesize searching=_searching;
@property(nonatomic) long long firstIndexTag; // @synthesize firstIndexTag=_firstIndexTag;
@property(nonatomic) _Bool isRefreshedIndexView; // @synthesize isRefreshedIndexView=_isRefreshedIndexView;
@property(retain, nonatomic) NSArray *indexViewLetter; // @synthesize indexViewLetter=_indexViewLetter;
@property(retain, nonatomic) KGIndexView *indexView; // @synthesize indexView=_indexView;
@property(retain, nonatomic) KGSearchNoResultView *noSearchResultView; // @synthesize noSearchResultView=_noSearchResultView;
@property(retain, nonatomic) NSArray *searchArray; // @synthesize searchArray=_searchArray;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(copy, nonatomic) NSArray *allDataArray; // @synthesize allDataArray=_allDataArray;
@property(retain, nonatomic) KGLocalSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) KGTableView *singerTableView; // @synthesize singerTableView=_singerTableView;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)showSelectedIndexItem:(id)arg1 index:(unsigned long long)arg2;
- (void)pandoItem:(id)arg1 index:(unsigned long long)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchSinger:(id)arg1 becomeFirstResponder:(_Bool)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)backUpAndRecover;
- (void)textLinkEvent;
- (void)toMusicLib;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshIndexView;
- (void)hideNoSinger;
- (void)showNoSinger;
- (id)p_moveUnknownSingerToLastWithDataArray:(id)arg1;
- (void)reloadContent;
- (void)cancleSearch;
- (void)shareDirChanged:(id)arg1;
- (void)syn_end:(id)arg1;
- (void)loadSingerPicAndReloadContent;
- (void)createUIContent;
- (void)registerNotify;
- (void)dealloc;
- (void)viewManagerChangeState:(int)arg1;
- (void)viewDidExit;
- (void)viewDidEnter;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

