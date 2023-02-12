// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LobbyUI.generated.h"

class UScrollBox;
class UEditableTextBox;
class UButton;
/**
 * 
 */
UCLASS(Abstract)
class DGAME_API ULobbyUI : public UUserWidget
{
	GENERATED_BODY()
protected:
	UFUNCTION()
	void OnSingleButtonClicked();
	
	UFUNCTION()
	void OnCreateLanButtonClicked();
	UFUNCTION()
	void OnFindLanButtonClicked();
	
	UFUNCTION()
	void OnCreateDsButtonClicked();
	UFUNCTION()
	void OnJoinDsButtonClicked();
	
	virtual void NativeOnInitialized() override;

	UPROPERTY(Meta = (BindWidget), BlueprintReadOnly)
	UButton* SingleButton;
	
	UPROPERTY(Meta = (BindWidget), BlueprintReadOnly)
	UButton* CreateLanButton;
	UPROPERTY(Meta = (BindWidget), BlueprintReadOnly)
	UButton* FindLanButton;
	UPROPERTY(Meta = (BindWidget), BlueprintReadOnly)
	UScrollBox* ServerPanel;


	UPROPERTY(Meta = (BindWidget), BlueprintReadOnly)
	UButton* CreateDSButton;
	UPROPERTY(Meta = (BindWidget), BlueprintReadOnly)
	UEditableTextBox* ServerIp;
	UPROPERTY(Meta = (BindWidget), BlueprintReadOnly)
	UEditableTextBox* ServerPort;
	UPROPERTY(Meta = (BindWidget), BlueprintReadOnly)
	UButton* JoinDSButton;
};
