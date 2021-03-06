/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PHStarkGenericTableViewCell.h"

@class NSLayoutConstraint, UILabel;

__attribute__((visibility("hidden")))
@interface PHStarkFavoritesTableViewCell : PHStarkGenericTableViewCell {
	UILabel* _nameLabel;
	UILabel* _phoneNumberTypeLabel;
	NSLayoutConstraint* _nameLabelBaselineLayoutConstraint;
}
@property(retain) NSLayoutConstraint* nameLabelBaselineLayoutConstraint;
@property(retain) UILabel* phoneNumberTypeLabel;
@property(retain) UILabel* nameLabel;
-(void)setRepresentedFavorite:(id)favorite;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

