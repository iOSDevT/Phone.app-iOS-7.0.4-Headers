/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PHVoicemailListMaskViewDelegate.h"
#import "ABUnknownPersonViewControllerDelegate.h"
#import "PHVoicemailCellDelegate.h"
#import "PhoneViewController.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "MobilePhone-Structs.h"

@class PHVoicemailListMaskView, NSArray, NSObject, UITableView, PHVoicemailNavigationController, UIGestureRecognizer, VMVoicemail, NSIndexPath;
@protocol OS_dispatch_queue, OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface PHVoicemailListViewController : PhoneViewController <PHVoicemailListMaskViewDelegate, ABUnknownPersonViewControllerDelegate, UIGestureRecognizerDelegate, PHVoicemailCellDelegate, UITableViewDataSource, UITableViewDelegate> {
	PHVoicemailNavigationController* _navigationController;
	PHVoicemailListMaskView* _maskView;
	UITableView* _tableView;
	NSObject<OS_dispatch_queue>* _queue;
	int _disableUserInteractionCountLock;
	int _disableUserInteractionCount;
	int _isReloadingTableViewLock;
	BOOL _isReloadingTableView;
	BOOL _shouldReloadTableView;
	NSObject<OS_dispatch_queue>* _initialSetupQueue;
	int _isSettingUpLock;
	BOOL _isSettingUp;
	BOOL _reloadAfterInitialSetup;
	NSObject<OS_dispatch_group>* _loadingGroup;
	NSArray* _voicemails;
	NSArray* _childListViewControllersWithContent;
	BOOL _visible;
	BOOL _showingUnavailableCell;
	NSIndexPath* _detailIndexPath;
	VMVoicemail* _selectedVoicemail;
	UIGestureRecognizer* _navBarGestureRecognizer;
	UIGestureRecognizer* _leftBarButtonItemGestureRecognizer;
	UIGestureRecognizer* _rightBarButtonItemGestureRecognizer;
}
@property(retain) UIGestureRecognizer* rightBarButtonItemGestureRecognizer;
@property(retain) UIGestureRecognizer* leftBarButtonItemGestureRecognizer;
@property(retain) UIGestureRecognizer* navBarGestureRecognizer;
@property(retain) NSArray* childListViewControllersWithContent;
@property(assign) BOOL showingUnavailableCell;
@property(retain) VMVoicemail* selectedVoicemail;
@property(retain) NSIndexPath* detailIndexPath;
@property(assign) BOOL visible;
@property(readonly, assign) BOOL shouldBeShown;
@property(retain) NSArray* voicemails;
@property(assign) PHVoicemailNavigationController* navigationController;
-(void)_updateUIForMaskViewChange;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(void)_handleNavBarTap:(id)tap;
-(void)_enableInteraction;
-(void)_disableInteraction;
-(void)_reloadTableViewIfNecessary;
-(void)_performEfficientTableViewReloadWithVoicemails:(id)voicemails childListControllersWithContent:(id)content showingUnavailableCell:(BOOL)cell;
-(void)_forceCompleteTableViewReloadWithVoicemails:(id)voicemails childListControllersWithContent:(id)content showingUnavailableCell:(BOOL)cell;
-(void)_popOffIfNeeded;
-(id)_indexPathForItem:(id)item inList:(id)list offset:(int)offset;
-(id)_indexPathsForItems:(id)items inList:(id)list offset:(int)offset;
-(void)_updateTitle;
-(int)_firstVoicemailOffset;
-(void)unknownPersonViewController:(id)controller didResolveToPerson:(void*)person;
-(void)closeVoicemail;
-(void)maskViewWasTappedOutsideOfShownCell:(id)shownCell;
-(void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForDeleteConfirmationButtonForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didDeselectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view accessoryButtonTappedForRowWithIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canMoveRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(id)contentScrollView;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)loadView;
-(id)_fetchCurrentChildListViewControllersWithContent;
-(id)_fetchCurrentVoicemails;
-(void)_handleContentSizeDidChange:(id)_handleContentSize;
-(void)_voicemailUnavailableCellHeightChanged:(id)changed;
-(void)_handleBackgroundNotification:(id)notification;
-(void)_handleVoicemailListChanged:(id)changed;
-(void)playVoicemail:(id)voicemail;
-(void)dealloc;
-(id)initWithNavigationController:(id)navigationController;
@end

