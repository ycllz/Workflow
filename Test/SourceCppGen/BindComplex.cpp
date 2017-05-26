/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: ../Resources/Codegen/BindComplex.txt

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "BindComplex.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

#define GLOBAL_SYMBOL ::vl_workflow_global::BindComplex::
#define GLOBAL_NAME ::vl_workflow_global::BindComplex::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::BindComplex::Instance()
#define USERIMPL(...)

/***********************************************************************
Global Variables
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_BindComplex)
	vl_workflow_global::BindComplex instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS

		instance.s = ::vl::WString(L"", false);
	FINALIZE_GLOBAL_STORAGE_CLASS

		instance.s = ::vl::WString::Empty;
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_BindComplex)

namespace vl_workflow_global
{
/***********************************************************************
Global Functions
***********************************************************************/

	void BindComplex::Callback(const ::vl::reflection::description::Value& value)
	{
		(GLOBAL_NAME s = ((((::vl::WString(L"", false) + GLOBAL_NAME s) + ::vl::WString(L"[", false)) + ::vl::__vwsn::ToString(::vl::__vwsn::Unbox<::vl::vint32_t>(value))) + ::vl::WString(L"]", false)));
	}

	::vl::WString BindComplex::main()
	{
		auto x = ::vl::Ptr<::test::ObservableValue>(new ::test::ObservableValue());
		auto y = ::vl::Ptr<::test::ObservableValue>(new ::test::ObservableValue());
		auto z = ::vl::Ptr<::test::ObservableValue>(new ::test::ObservableValue());
		auto subscription = ::vl::Ptr<::vl::reflection::description::IValueSubscription>(new ::vl_workflow_global::__vwsnc1_BindComplex_main__vl_reflection_description_IValueSubscription(x, y, z));
		::vl::__vwsn::This(subscription.Obj())->Open();
		::vl::__vwsn::EventAttach(::vl::__vwsn::This(subscription.Obj())->ValueChanged, ::vl::Func<void(const ::vl::reflection::description::Value&)>(GLOBAL_OBJ, &GLOBAL_SYMBOL Callback));
		::vl::__vwsn::This(x.Obj())->SetValue(10);
		::vl::__vwsn::This(y.Obj())->SetValue(20);
		::vl::__vwsn::This(z.Obj())->SetValue(30);
		::vl::__vwsn::This(subscription.Obj())->Close();
		return GLOBAL_NAME s;
	}

	BindComplex& BindComplex::Instance()
	{
		return Getvl_workflow_global_BindComplex().instance;
	}

/***********************************************************************
Closures
***********************************************************************/

	//-------------------------------------------------------------------

	__vwsnc1_BindComplex_main__vl_reflection_description_IValueSubscription::__vwsnc1_BindComplex_main__vl_reflection_description_IValueSubscription(::vl::Ptr<::test::ObservableValue> __vwsnctor_x, ::vl::Ptr<::test::ObservableValue> __vwsnctor_y, ::vl::Ptr<::test::ObservableValue> __vwsnctor_z)
		:x(__vwsnctor_x)
		, y(__vwsnctor_y)
		, z(__vwsnctor_z)
	{
		this->__vwsn_bind_cache_0 = ::vl::Ptr<::test::ObservableValue>();
		this->__vwsn_bind_cache_1 = ::vl::Ptr<::test::ObservableValue>();
		this->__vwsn_bind_cache_2 = ::vl::Ptr<::test::ObservableValue>();
		this->__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>();
		this->__vwsn_bind_handler_1_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>();
		this->__vwsn_bind_handler_2_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>();
		this->__vwsn_bind_handler_3_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>();
		this->__vwsn_bind_handler_4_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>();
		this->__vwsn_bind_handler_5_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>();
		this->__vwsn_bind_opened_ = false;
		this->__vwsn_bind_closed_ = false;
	}

	void __vwsnc1_BindComplex_main__vl_reflection_description_IValueSubscription::__vwsn_bind_activator_()
	{
		auto __vwsn_bind_activator_result_ = [&](auto _x){ return (::vl::__vwsn::This(__vwsn_bind_cache_0.Obj())->GetValue() + [&](auto _y){ return (::vl::__vwsn::This(__vwsn_bind_cache_1.Obj())->GetValue() + [&](auto _z){ return ::vl::__vwsn::This(__vwsn_bind_cache_2.Obj())->GetValue(); }(__vwsn_bind_cache_2)); }(__vwsn_bind_cache_1)); }(__vwsn_bind_cache_0);
		::vl::__vwsn::EventInvoke(this->ValueChanged)(::vl::__vwsn::Box(__vwsn_bind_activator_result_));
	}

	void __vwsnc1_BindComplex_main__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_0_0(::vl::vint32_t __vwsn_bind_callback_argument_0, ::vl::vint32_t __vwsn_bind_callback_argument_1)
	{
		this->__vwsn_bind_activator_();
	}

	void __vwsnc1_BindComplex_main__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_1_0(::vl::vint32_t __vwsn_bind_callback_argument_0, ::vl::vint32_t __vwsn_bind_callback_argument_1)
	{
		this->__vwsn_bind_activator_();
	}

	void __vwsnc1_BindComplex_main__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_2_0(::vl::vint32_t __vwsn_bind_callback_argument_0, ::vl::vint32_t __vwsn_bind_callback_argument_1)
	{
		this->__vwsn_bind_activator_();
	}

	void __vwsnc1_BindComplex_main__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_3_0(::vl::vint32_t __vwsn_bind_callback_argument_0, ::vl::vint32_t __vwsn_bind_callback_argument_1)
	{
		this->__vwsn_bind_activator_();
	}

	void __vwsnc1_BindComplex_main__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_4_0(::vl::vint32_t __vwsn_bind_callback_argument_0, ::vl::vint32_t __vwsn_bind_callback_argument_1)
	{
		this->__vwsn_bind_activator_();
	}

	void __vwsnc1_BindComplex_main__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_5_0(::vl::vint32_t __vwsn_bind_callback_argument_0, ::vl::vint32_t __vwsn_bind_callback_argument_1)
	{
		this->__vwsn_bind_activator_();
	}

	bool __vwsnc1_BindComplex_main__vl_reflection_description_IValueSubscription::Open()
	{
		if ((! __vwsn_bind_opened_))
		{
			(__vwsn_bind_opened_ = true);
			(__vwsn_bind_cache_0 = this->x);
			(__vwsn_bind_cache_1 = this->y);
			(__vwsn_bind_cache_2 = this->z);
			(__vwsn_bind_handler_0_0 = ::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_bind_cache_0.Obj())->ValueChanged, ::vl::Func<void(::vl::vint32_t, ::vl::vint32_t)>(this, &__vwsnc1_BindComplex_main__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_0_0)));
			(__vwsn_bind_handler_1_0 = ::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_bind_cache_0.Obj())->ValueChanged, ::vl::Func<void(::vl::vint32_t, ::vl::vint32_t)>(this, &__vwsnc1_BindComplex_main__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_1_0)));
			(__vwsn_bind_handler_2_0 = ::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_bind_cache_1.Obj())->ValueChanged, ::vl::Func<void(::vl::vint32_t, ::vl::vint32_t)>(this, &__vwsnc1_BindComplex_main__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_2_0)));
			(__vwsn_bind_handler_3_0 = ::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_bind_cache_1.Obj())->ValueChanged, ::vl::Func<void(::vl::vint32_t, ::vl::vint32_t)>(this, &__vwsnc1_BindComplex_main__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_3_0)));
			(__vwsn_bind_handler_4_0 = ::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_bind_cache_2.Obj())->ValueChanged, ::vl::Func<void(::vl::vint32_t, ::vl::vint32_t)>(this, &__vwsnc1_BindComplex_main__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_4_0)));
			(__vwsn_bind_handler_5_0 = ::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_bind_cache_2.Obj())->ValueChanged, ::vl::Func<void(::vl::vint32_t, ::vl::vint32_t)>(this, &__vwsnc1_BindComplex_main__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_5_0)));
			return true;
		}
		return false;
	}

	bool __vwsnc1_BindComplex_main__vl_reflection_description_IValueSubscription::Update()
	{
		if ((__vwsn_bind_opened_ && (! __vwsn_bind_closed_)))
		{
			this->__vwsn_bind_activator_();
			return true;
		}
		return false;
	}

	bool __vwsnc1_BindComplex_main__vl_reflection_description_IValueSubscription::Close()
	{
		if ((! __vwsn_bind_closed_))
		{
			(__vwsn_bind_closed_ = true);
			::vl::__vwsn::EventDetach(::vl::__vwsn::This(__vwsn_bind_cache_0.Obj())->ValueChanged, __vwsn_bind_handler_0_0);
			::vl::__vwsn::EventDetach(::vl::__vwsn::This(__vwsn_bind_cache_0.Obj())->ValueChanged, __vwsn_bind_handler_1_0);
			::vl::__vwsn::EventDetach(::vl::__vwsn::This(__vwsn_bind_cache_1.Obj())->ValueChanged, __vwsn_bind_handler_2_0);
			::vl::__vwsn::EventDetach(::vl::__vwsn::This(__vwsn_bind_cache_1.Obj())->ValueChanged, __vwsn_bind_handler_3_0);
			::vl::__vwsn::EventDetach(::vl::__vwsn::This(__vwsn_bind_cache_2.Obj())->ValueChanged, __vwsn_bind_handler_4_0);
			::vl::__vwsn::EventDetach(::vl::__vwsn::This(__vwsn_bind_cache_2.Obj())->ValueChanged, __vwsn_bind_handler_5_0);
			(__vwsn_bind_cache_0 = ::vl::Ptr<::test::ObservableValue>());
			(__vwsn_bind_cache_1 = ::vl::Ptr<::test::ObservableValue>());
			(__vwsn_bind_cache_2 = ::vl::Ptr<::test::ObservableValue>());
			(__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			(__vwsn_bind_handler_1_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			(__vwsn_bind_handler_2_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			(__vwsn_bind_handler_3_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			(__vwsn_bind_handler_4_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			(__vwsn_bind_handler_5_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			return true;
		}
		return false;
	}

}

#undef GLOBAL_SYMBOL
#undef GLOBAL_NAME
#undef GLOBAL_OBJ
#undef USERIMPL

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif
